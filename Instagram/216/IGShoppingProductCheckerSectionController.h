//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGPlaybackCoordinatorSessionDelegate-Protocol.h"

@class IGPlaybackCoordinator, IGShoppingProductCheckerViewModel, NSString;
@protocol IGShoppingProductCheckerLoggingProviderType, IGShoppingProductCheckerSectionControllerDelegate;

@interface IGShoppingProductCheckerSectionController : IGListSectionController <IGPlaybackCoordinatorSessionDelegate>
{
    IGShoppingProductCheckerViewModel *_viewModel;
    struct IGGridLayoutConfiguration _layoutConfig;
    NSString *_analyticsModule;
    id <IGShoppingProductCheckerLoggingProviderType> _loggingProvider;
    IGPlaybackCoordinator *_playbackCoordinator;
    id <IGShoppingProductCheckerSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingProductCheckerSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playbackCoordinatorSession:(id)arg1 didReceiveEvent:(long long)arg2 withContext:(id)arg3 forView:(id)arg4;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithLayoutConfig:(struct IGGridLayoutConfiguration)arg1 analyticsModule:(id)arg2 loggingProvider:(id)arg3 playbackCoordinator:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

