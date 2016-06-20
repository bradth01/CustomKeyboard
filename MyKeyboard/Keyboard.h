//
//  Keyboard.h
//  CustomKeyboard
//
//  Created by Thomas Bradley on 6/19/16.
//  Copyright © 2016 Thomas Bradley. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Keyboard : UIView

@property (weak, nonatomic) IBOutlet UIButton *deleteKey;

@property (weak, nonatomic) IBOutlet UIButton *globeKey;

@property (weak, nonatomic) IBOutlet UIButton *spaceKey;

@property (weak, nonatomic) IBOutlet UIButton *returnKey;

@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *keysArray;

@end
