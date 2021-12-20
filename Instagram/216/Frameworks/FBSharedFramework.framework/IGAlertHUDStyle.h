//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString, UIImage;

@interface IGAlertHUDStyle : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_progressIndicatorAndText_text;
    UIImage *_horizontalHUD_icon;
    NSString *_horizontalHUD_text;
    UIImage *_verticalHUD_icon;
    NSString *_verticalHUD_text;
    NSString *_text;
}

+ (id)verticalHUDWithIcon:(id)arg1 text:(id)arg2;
+ (id)text:(id)arg1;
+ (id)progressIndicatorAndTextWithText:(id)arg1;
+ (id)progressIndicator;
+ (id)horizontalHUDWithIcon:(id)arg1 text:(id)arg2;
- (void).cxx_destruct;
- (void)matchProgressIndicator:(CDUnknownBlockType)arg1 progressIndicatorAndText:(CDUnknownBlockType)arg2 horizontalHUD:(CDUnknownBlockType)arg3 verticalHUD:(CDUnknownBlockType)arg4 text:(CDUnknownBlockType)arg5;

@end

