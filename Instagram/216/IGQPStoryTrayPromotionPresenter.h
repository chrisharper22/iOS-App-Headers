//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGQPStoryTrayPromotionPresenter : NSObject
{
}

+ (void)logStoryPromotionActionForPromotionID:(id)arg1 userSession:(id)arg2 analyticsLogger:(id)arg3;
+ (void)_logAndPersistImpressionDataForPromotionID:(id)arg1 userSession:(id)arg2 date:(id)arg3 analyticsLogger:(id)arg4;
+ (void)logStoryPromotionImpressionForPromotionID:(id)arg1 userSession:(id)arg2 analyticsLogger:(id)arg3;
+ (_Bool)_hasSeenStoryDismissCardPromotion:(id)arg1 userSession:(id)arg2;
+ (void)presentStoryDismissCard:(id)arg1 userSession:(id)arg2 analyticsLogger:(id)arg3;

@end
