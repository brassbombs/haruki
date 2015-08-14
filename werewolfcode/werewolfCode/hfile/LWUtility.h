//
//  LWUtility.h
//  嘘つき人狼
//
//  Created by Yuki Murakami on 2014/09/21.
//  Copyright (c) 2014年 yuki. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SpriteKit/SpriteKit.h>

typedef NS_ENUM(NSUInteger, FortuneTellerMode)
{
    FortuneTellerModeNone,
    FortuneTellerModeFree,
    FortuneTellerModeRevelation,
};

typedef NS_ENUM(NSUInteger, DeathReason)
{
    DeathReasonExcution,
    DeathReasonAttacked,
    DeathReasonSuicide,
    DeathReasonCurse,
    DeathReasonCat,
    DeathReasonHunter,
};

typedef NS_ENUM(NSUInteger, Roll) {
    RollVillager,
    RollWerewolf,
    RollFortuneTeller,
    RollShaman,
    RollMadman,
    RollBodyguard,
    RollJointOwner,
    RollFox,
    RollPossessed,
    RollToughGuy,
    RollApprenticeFortuneTeller,
    RollWolfboy,
    RollTrapmaker,
    RollCursed,
    RollKing,
    RollDictator,
    RollMotherFortuneTeller,
    RollHunter,
    RollMiming,
    RollFanatic,
    RollImmoralist,
    RollCat,
    RollBaker,
    RollNoble,
    RollSlave,
    //TODO::役職追加時変更点
};

@interface LWUtility : NSObject

+(NSMutableArray *) getDefaultRollArray :(int) count ;
+(int) getMaxRollCount ;
+(NSMutableDictionary *) getCardInfofromId :(int) cardId ;
+(NSMutableArray*) getRandomArray :(NSMutableArray*)array ;
+(NSMutableArray*) removeSameObject :(NSMutableArray *)array;
+(SKTexture *) getCardTexture :(int) cardId;

+(SKSpriteNode *) makeButton :(NSString*) text
                         size:(CGSize)size
                         name:(NSString*)name
                     position:(CGPoint)position;

+(SKSpriteNode *) makeFrameNode :(CGSize)size
                        position:(CGPoint)position
                           color:(UIColor*)color
                         texture:(SKTexture*)texture;

+ (UIImage*)rotateImage:(UIImage*)img angle:(int)angle;

+ (NSString*)getFortuneButtonString :(FortuneTellerMode)mode;

+ (NSInteger)getRandInteger :(NSInteger)maxInteger;

+ (NSString*)getDeathReasonString: (DeathReason)reason;

@end
