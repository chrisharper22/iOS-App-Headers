//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectThreadPresentationLogger, IGPerformanceComponent, IGPerformanceNavigationLogger, NSString;
@protocol IGPerformanceNavigationAppearListener;

@interface IGDirectThreadNavigationPerfComponents : NSObject
{
    IGPerformanceNavigationLogger *_logger;
    IGDirectThreadPresentationLogger *_presentationLogger;
    IGPerformanceComponent *_ttrcComponent;
    NSString *_ttrcMessageId;
    IGPerformanceComponent *_cacheWarmupComponent;
    IGPerformanceComponent *_dataFetchComponent;
    IGPerformanceComponent *_firstRenderComponent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGPerformanceComponent *firstRenderComponent; // @synthesize firstRenderComponent=_firstRenderComponent;
@property(readonly, nonatomic) IGPerformanceComponent *dataFetchComponent; // @synthesize dataFetchComponent=_dataFetchComponent;
@property(readonly, nonatomic) IGPerformanceComponent *cacheWarmupComponent; // @synthesize cacheWarmupComponent=_cacheWarmupComponent;
- (void)addAnnotationKey:(id)arg1 numberValue:(id)arg2;
- (void)addAnnotationKey:(id)arg1 boolValue:(_Bool)arg2;
- (void)addAnnotationKey:(id)arg1 stringValue:(id)arg2;
- (void)endTTRCWithMessageId:(id)arg1;
- (void)startTTRCWithMessageId:(id)arg1;
- (void)completePresentation;
@property(readonly, nonatomic) id <IGPerformanceNavigationAppearListener> threadAppearanceListener;
@property(readonly, nonatomic) id <IGPerformanceNavigationAppearListener> presentationAppearanceListener;
- (id)initWithLauncherSet:(id)arg1;

@end

