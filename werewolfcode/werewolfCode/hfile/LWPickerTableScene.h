//
//  LWPickerTableScene.h
//  嘘つき人狼
//
//  Created by Yuki Murakami on 2014/11/23.
//  Copyright (c) 2014年 yuki. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

#import "LWRollSettingScene.h"

@interface LWPickerTableScene : SKScene

@property (nonatomic) NSInteger currentNumber;
@property (nonatomic) NSString *rollString;
@property (nonatomic) NSInteger maxNumber;
@property (nonatomic) NSInteger backRow;
@property (nonatomic) LWRollSettingScene *toBackScene;


-(void)initBackgroundScene;

@end
