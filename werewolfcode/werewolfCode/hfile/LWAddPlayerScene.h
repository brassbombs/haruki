//
//  LWAddPlayerScene.h
//  嘘つき人狼
//
//  Created by Yuki Murakami on 2014/09/21.
//  Copyright (c) 2014年 yuki. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

#import "LWPlayerSettingScene.h"


@interface LWAddPlayerScene : SKScene <UITextFieldDelegate,UINavigationControllerDelegate, UIImagePickerControllerDelegate,UITextViewDelegate> {
    
    SKSpriteNode *faceImage;
    UIImage *faceImageImage;
    UITextView *nameView;
    LWPlayerSettingScene *toBackScene;
    
    NSMutableDictionary *infoDic;
    
    UIImagePickerController *ipc;
    
    bool editFlag;
}

-(void) setBackScene :(SKScene *)backScene editFlag:(bool)editFlag infoDic:(NSMutableDictionary *)infoDic;

@end
