//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGPerformanceLoadingIndicatorListener-Protocol.h"
#import "IGViewDisappearListener-Protocol.h"

@class IGPerformanceComponent, IGPerformanceComposableLogger, IGPerformanceLoadingIndicatorAnnouncer, NSString, UIScrollView;

@interface IGPerformanceTailFetchLogger : NSObject <IGPerformanceLoadingIndicatorListener, IGViewDisappearListener>
{
    UIScrollView *_scrollView;
    unsigned long long _direction;
    IGPerformanceLoadingIndicatorAnnouncer *_loadingIndicatorAnnouncer;
    IGPerformanceComponent *_fetchComponent;
    IGPerformanceComponent *_visibleComponent;
    IGPerformanceComposableLogger *_composableLogger;
}

- (void).cxx_destruct;
- (void)viewController:(id)arg1 viewDidDisappearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewWillDisappearAnimated:(_Bool)arg2;
- (void)performanceLoadingIndicatorDidDisappear;
- (void)performanceLoadingIndicatorDidAppearWithLoggingExtras:(id)arg1;
- (void)_setStartAnnotationIfNeeded;
- (void)addAnnotationKey:(id)arg1 numberValue:(id)arg2;
- (void)addAnnotationKey:(id)arg1 stringValue:(id)arg2;
- (void)addAnnotationKey:(id)arg1 boolValue:(_Bool)arg2;
- (void)logFetchFailedWithError:(id)arg1;
- (void)logFetchSuccess;
- (void)logFetchStart;
- (void)configureWithScrollView:(id)arg1 direction:(unsigned long long)arg2 loadingIndicatorAnnouncer:(id)arg3;
- (id)initWithMarkerID:(int)arg1 analyticsModule:(id)arg2 viewControllerAnnouncer:(id)arg3 appStateAnnouncer:(id)arg4;
- (id)initWithMarkerID:(int)arg1 analyticsModule:(id)arg2 viewControllerAnnouncer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
