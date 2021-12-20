//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGChainingTitleConfig : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_static_title;
    NSString *_dynamic_firstItemTitle;
    NSString *_dynamic_otherItemTitle;
    NSString *_dynamic_backItemTitle;
}

+ (id)staticWithTitle:(id)arg1;
+ (id)dynamicWithFirstItemTitle:(id)arg1 otherItemTitle:(id)arg2 backItemTitle:(id)arg3;
- (void).cxx_destruct;
- (void)matchStatic:(CDUnknownBlockType)arg1 dynamic:(CDUnknownBlockType)arg2;

@end
