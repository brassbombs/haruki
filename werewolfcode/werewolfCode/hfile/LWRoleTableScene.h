//
//  LWRoleTableScene.h
//  嘘つき人狼
//
//  Created by Yuki Murakami on 2015/06/05.
//  Copyright (c) 2015年 yuki. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

#import "LWSettingScene.h"

@interface LWRoleTableScene : SKScene <UITableViewDataSource,UITableViewDelegate> {
    UITableView *table;
    
    SKScene *toBackScene;
    
}

-(void) setBackScene :(SKScene *)backScene ;

@end
