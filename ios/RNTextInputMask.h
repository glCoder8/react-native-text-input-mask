//
//  RNTextInputMask.h
//  RNTextInputMask
//
//  Created by Ivan Zotov on 7/29/17.
//
//

#import <UIKit/UIKit.h>
#import <React/RCTBridgeModule.h>

// @import InputMask;
#import "InputMask.h"

@interface RNTextInputMask : NSObject <RCTBridgeModule, MaskedTextFieldDelegateListener>
@end
