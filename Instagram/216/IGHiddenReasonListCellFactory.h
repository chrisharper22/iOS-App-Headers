//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGHiddenReasonListCellFactory : NSObject
{
}

+ (double)_heightForItem:(id)arg1 numberOfExtraOptions:(unsigned long long)arg2 width:(double)arg3 userSession:(id)arg4;
+ (double)heightForItem:(id)arg1 numberOfExtraOptions:(unsigned long long)arg2;
+ (double)heightForItem:(id)arg1 width:(double)arg2 userSession:(id)arg3;
+ (double)heightForItem:(id)arg1;
+ (void)configureCell:(id)arg1 media:(id)arg2 withReasonList:(id)arg3 delegate:(id)arg4 feedTheme:(id)arg5 type:(unsigned long long)arg6 userSession:(id)arg7 analyticsModule:(id)arg8;
+ (void)configureCell:(id)arg1 media:(id)arg2 feedTheme:(id)arg3 userSession:(id)arg4 analyticsModule:(id)arg5 loggingDelegate:(id)arg6 analyticsLogger:(id)arg7 mediaHiddenAnnouncer:(id)arg8 sponsoredSupportConfiguration:(id)arg9;

@end

