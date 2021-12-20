//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPerformanceComponent, IGPerformanceNavigationLogger, NSString;

@interface IGSundialTrendNavigationPerfComponents : NSObject
{
    IGPerformanceComponent *_trendsLoad;
    IGPerformanceComponent *_listUpdate;
    IGPerformanceComponent *_loadingFirstThumbnail;
    NSString *_thumbnailIdentifier;
    IGPerformanceNavigationLogger *_logger;
    NSString *_entrySource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *entrySource; // @synthesize entrySource=_entrySource;
@property(readonly, nonatomic) IGPerformanceNavigationLogger *logger; // @synthesize logger=_logger;
- (void)logThumbnailCompletedWithIdentifier:(id)arg1 error:(id)arg2;
- (void)logThumbnailLoadingStartedWithIdentifier:(id)arg1;
- (void)logListUpdatingCompletedWithSuccess:(_Bool)arg1;
- (void)logListUpdatingStarted;
- (void)logTrendLoadingCompletedWithCountOfTrends:(long long)arg1 isCached:(_Bool)arg2 error:(id)arg3;
- (void)logTrendLoadingStarted;
- (id)init;

@end

