//
//  LWPlayerSettingScene.h
//  嘘つき人狼
//
//  Created by Yuki Murakami on 2014/09/21.
//  Copyright (c) 2014年 yuki. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface LWPlayerSettingScene : SKScene <UITableViewDataSource,UITableViewDelegate> {
    NSMutableArray *playerArray;
    
    SKScene *toBackScene;
    
    UITableView *mytable;
}


-(void) setBackScene :(SKScene *)backScene :(NSMutableArray *)playerArray;
-(void) addTable :(NSMutableDictionary *)info;
-(void)deleteTable :(int) row;
-(void)editTable :(int)row info:(NSMutableDictionary *)info;
@end
