//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGDirectMediaPickerSavedCollectionConfig : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_enabled_title;
    NSString *_enabled_subtitle;
    _Bool _enabled_multiSelectEnabled;
    NSString *_enabled_apiPath;
    _Bool _enabled_showOverlayButtonOnScrolled;
    NSString *_enabled_overlayButtonTitle;
}

+ (id)enabledWithTitle:(id)arg1 subtitle:(id)arg2 multiSelectEnabled:(_Bool)arg3 apiPath:(id)arg4 showOverlayButtonOnScrolled:(_Bool)arg5 overlayButtonTitle:(id)arg6;
+ (id)disabled;
- (void).cxx_destruct;
- (void)matchDisabled:(CDUnknownBlockType)arg1 enabled:(CDUnknownBlockType)arg2;

@end

