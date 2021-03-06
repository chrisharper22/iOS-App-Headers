//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPartialModalSheetNavigationController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"

@class IGPartialModalSheetViewController, IGSundialInspirationHubViewController, NSString;

@interface IGSundialInspirationHubModalViewController : IGPartialModalSheetNavigationController <IGPartialModalSheetListener, IGGestureHandler>
{
    IGPartialModalSheetViewController *_partialModalSheetViewController;
    IGSundialInspirationHubViewController *_inspirationHubViewController;
}

- (void).cxx_destruct;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 context:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

