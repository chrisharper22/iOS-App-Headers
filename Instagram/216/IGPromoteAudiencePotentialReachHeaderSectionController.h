//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGPromoteAudiencePotentialPeopleReachedUpdateListener-Protocol.h"
#import "IGPromoteAudiencePotentialReachHeaderWithIconViewCellDelegate-Protocol.h"

@class NSString;
@protocol IGPromoteAudiencePotentialPeopleReachedUpdateAnnouncer, IGPromoteAudiencePotentialReachHeaderWithIconSectionControllerDelegate;

@interface IGPromoteAudiencePotentialReachHeaderSectionController : IGListGenericSectionController <IGPromoteAudiencePotentialReachHeaderWithIconViewCellDelegate, IGPromoteAudiencePotentialPeopleReachedUpdateListener>
{
    id <IGPromoteAudiencePotentialPeopleReachedUpdateAnnouncer> _announcer;
    id <IGPromoteAudiencePotentialReachHeaderWithIconSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromoteAudiencePotentialReachHeaderWithIconSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapEstimateRangeInfoIconCell;
- (void)didFinishLoading;
- (void)didStartLoading;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithAnnouncer:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

