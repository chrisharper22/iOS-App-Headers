//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class UIView;

@interface IGAlertDialogStyle : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    UIView *_centeredImage;
    UIView *_circleImage;
    UIView *_freeformImage;
}

+ (id)freeformImage:(id)arg1;
+ (id)defaultStyle;
+ (id)circleImage:(id)arg1;
+ (id)centeredImage:(id)arg1;
- (void).cxx_destruct;
- (void)matchDefaultStyle:(CDUnknownBlockType)arg1 centeredImage:(CDUnknownBlockType)arg2 circleImage:(CDUnknownBlockType)arg3 freeformImage:(CDUnknownBlockType)arg4;

@end
