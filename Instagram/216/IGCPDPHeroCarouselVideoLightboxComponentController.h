//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/BKBloksComponentController.h>

#import "IGListAdapterDataSource-Protocol.h"

@class IGListAdapter, NSString;

@interface IGCPDPHeroCarouselVideoLightboxComponentController : BKBloksComponentController <IGListAdapterDataSource>
{
    IGListAdapter *_adapter;
}

- (void).cxx_destruct;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)componentWillRelinquishView:(id)arg1;
- (void)componentDidAcquireView:(id)arg1;
- (void)_stopPlaying;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

