//
//  LWGameScene.h
//  嘘つき人狼
//
//  Created by Yuki Murakami on 2014/09/22.
//  Copyright (c) 2014年 yuki. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

#import "LWSettingScene.h"

@interface LWGameScene : SKScene  <UITableViewDataSource,UITableViewDelegate,UIAlertViewDelegate>  {
    NSMutableDictionary *infoDic;
    NSMutableDictionary *originalDic;
    SKScene *toBackScene;
    
    SKSpriteNode *background;
    
    UITableView *table;
}

-(void) setBackScene :(SKScene *)backScene infoDic:(NSMutableDictionary *)_infoDic ;

@end
