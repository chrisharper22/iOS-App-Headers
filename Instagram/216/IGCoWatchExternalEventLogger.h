//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGCoWatchExternalEventLogger : NSObject
{
}

+ (void)logCoWatchThreadEntryPointInterstitialDialogCallStartWithUserSession:(id)arg1 media:(id)arg2 postItemPk:(id)arg3 threadId:(id)arg4 waterfallId:(id)arg5 surface:(id)arg6 isAppCoPresent:(_Bool)arg7;
+ (void)logCoWatchThreadEntryPointInterstitialDialogDismissedWithUserSession:(id)arg1 media:(id)arg2 postItemPk:(id)arg3 threadId:(id)arg4 waterfallId:(id)arg5 surface:(id)arg6;
+ (void)_logCoWatchEventWithLogger:(id)arg1 action:(int)arg2 mediaId:(id)arg3 threadId:(id)arg4 mediaSource:(Optional_0c98c4d5)arg5 mediaType:(Optional_f7371752)arg6 source:(Optional_5e890e40)arg7 waterfallId:(id)arg8 extraInfo:(id)arg9;
+ (void)logCoWatchEntryPointClickWithUserSession:(id)arg1 media:(id)arg2 postItemPk:(id)arg3 threadId:(id)arg4 entryPointSource:(unsigned long long)arg5 waterfallId:(id)arg6 surface:(id)arg7;
+ (void)logCoWatchEntryPointImpressionWithUserSession:(id)arg1 media:(id)arg2 postItemPk:(id)arg3 threadId:(id)arg4 entryPointSource:(unsigned long long)arg5 waterfallId:(id)arg6 surface:(id)arg7;

@end
