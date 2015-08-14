//
//  LWSettingScene.h
//  嘘つき人狼
//
//  Created by Yuki Murakami on 2014/09/21.
//  Copyright (c) 2014年 yuki. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

#import "LWPlayerSettingScene.h"
#import "LWRollSettingScene.h"
#import "LWRuleSettingScene.h"
#import "LWGameScene.h"
#import "LWRoleTableScene.h"

@interface LWSettingScene : SKScene {
    int player;
    
    LWPlayerSettingScene *playerSettingScene;
    SKScene *rollSettingScene;
    SKScene *ruleSettingScene;
    SKScene *gameScene;
    
    NSMutableDictionary *informations;
}

-(void)setPlayerInfo :(NSArray *)playerInfo ;
-(void)setRollInfo :(NSMutableArray *)rollInfo ;
-(void)setRuleInfo :(NSMutableDictionary *)ruleInfo ;
@end
