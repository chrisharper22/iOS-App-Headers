//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGPromoteDraftDataFetcher : NSObject
{
}

+ (void)postUpdateDraftWithUserSession:(id)arg1 draftId:(id)arg2 destination:(id)arg3 cta:(id)arg4 websiteURL:(id)arg5 audienceId:(id)arg6 audienceCode:(id)arg7 regulatedCategories:(id)arg8 durationInDays:(long long)arg9 dailyBudgetWithOffset:(long long)arg10 leadGenFormId:(id)arg11 successBlock:(CDUnknownBlockType)arg12 failureBlock:(CDUnknownBlockType)arg13;
+ (void)postDeleteDraftWithUserSession:(id)arg1 mediaId:(id)arg2 draftId:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (void)postCreateDraftWithUserSession:(id)arg1 MediaId:(id)arg2 adAccountId:(id)arg3 destination:(id)arg4 cta:(id)arg5 websiteURL:(id)arg6 audienceId:(id)arg7 audienceCode:(id)arg8 regulatedCategories:(id)arg9 durationInDays:(long long)arg10 dailyBudgetWithOffset:(long long)arg11 leadGenFormId:(id)arg12 successBlock:(CDUnknownBlockType)arg13 failureBlock:(CDUnknownBlockType)arg14;

@end

