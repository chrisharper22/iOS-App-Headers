//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGLiveShoppingPinnedProductCTAConfig : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    _Bool _save_isSaved;
    long long _bag_state;
    _Bool _reminder_isReminderEnabled;
    NSString *_reminder_reminderNotSetText;
    _Bool _changePinnedProduct_hasPinnedProduct;
    long long _openShoppingEntrypoint_type;
}

+ (id)saveWithIsSaved:(_Bool)arg1;
+ (id)reminderWithIsReminderEnabled:(_Bool)arg1 reminderNotSetText:(id)arg2;
+ (id)preOrder;
+ (id)openShoppingEntrypointWithType:(long long)arg1;
+ (id)none;
+ (id)countdown;
+ (id)changePinnedProductWithHasPinnedProduct:(_Bool)arg1;
+ (id)buyNow;
+ (id)bagWithState:(long long)arg1;
- (void).cxx_destruct;
- (void)matchNone:(CDUnknownBlockType)arg1 save:(CDUnknownBlockType)arg2 bag:(CDUnknownBlockType)arg3 reminder:(CDUnknownBlockType)arg4 changePinnedProduct:(CDUnknownBlockType)arg5 openShoppingEntrypoint:(CDUnknownBlockType)arg6 countdown:(CDUnknownBlockType)arg7 buyNow:(CDUnknownBlockType)arg8 preOrder:(CDUnknownBlockType)arg9;
- (_Bool)matchBooleanNone:(CDUnknownBlockType)arg1 save:(CDUnknownBlockType)arg2 bag:(CDUnknownBlockType)arg3 reminder:(CDUnknownBlockType)arg4 changePinnedProduct:(CDUnknownBlockType)arg5 openShoppingEntrypoint:(CDUnknownBlockType)arg6 countdown:(CDUnknownBlockType)arg7 buyNow:(CDUnknownBlockType)arg8 preOrder:(CDUnknownBlockType)arg9;

@end

