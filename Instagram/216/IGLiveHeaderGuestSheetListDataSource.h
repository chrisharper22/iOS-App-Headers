//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGLiveBroadcastImageTitleSectionControllerDelegate-Protocol.h"
#import "IGLiveBroadcastUserSectionControllerDelegate-Protocol.h"

@class IGAffiliateInfo, IGLabelItemConfiguration, IGLabelItemViewModel, IGLiveBroadcastEmptyView, IGLiveBroadcastImageTitleModel, IGUser, IGUserSession, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol IGLiveHeaderSheetDelegate;

@interface IGLiveHeaderGuestSheetListDataSource : NSObject <IGLiveBroadcastImageTitleSectionControllerDelegate, IGLiveBroadcastUserSectionControllerDelegate, IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    id <IGLiveHeaderSheetDelegate> _headerSheetDelegate;
    IGLabelItemViewModel *_sectionTitleModel;
    IGLabelItemViewModel *_viewerListSectionTitleModel;
    IGLabelItemViewModel *_viewerListSectionSubtitleModel;
    IGLiveBroadcastImageTitleModel *_requestJoinModel;
    IGLiveBroadcastEmptyView *_emptyView;
    NSMutableDictionary *_followStatusByUserPk;
    NSMutableDictionary *_guestStateByUserPk;
    NSString *_module;
    NSArray *_brandPartners;
    IGLabelItemConfiguration *_labelConfig;
    _Bool _showViewerList;
    _Bool _leaveButtonEnabled;
    _Bool _asViewer;
    _Bool _isViewerToViewerWavesEnabled;
    _Bool _asModerator;
    NSMutableArray *_disabledViewerPKs;
    _Bool _requestToJoinEnabled;
    NSString *_sectionTitle;
    IGUser *_host;
    NSArray *_guests;
    NSArray *_viewers;
    IGAffiliateInfo *_affiliateInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool requestToJoinEnabled; // @synthesize requestToJoinEnabled=_requestToJoinEnabled;
@property(retain, nonatomic) IGAffiliateInfo *affiliateInfo; // @synthesize affiliateInfo=_affiliateInfo;
@property(retain, nonatomic) NSArray *viewers; // @synthesize viewers=_viewers;
@property(retain, nonatomic) NSArray *brandPartners; // @synthesize brandPartners=_brandPartners;
@property(retain, nonatomic) NSArray *guests; // @synthesize guests=_guests;
@property(retain, nonatomic) IGUser *host; // @synthesize host=_host;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (void)disableViewer:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)_viewerListObjectsForListAdapter:(id)arg1;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)liveBroadcastUserSectionControllerShouldDisplayWaveButton:(id)arg1;
- (void)liveBroadcastUserSectionController:(id)arg1 didTapWaveButtonOfUserSource:(id)arg2;
- (void)liveBroadcastUserSectionController:(id)arg1 didTapMoreButtonOfUserSource:(id)arg2;
- (void)liveBroadcastUserSectionController:(id)arg1 didTapInviteButtonOfUserSource:(id)arg2;
- (void)liveBroadcastUserSectionController:(id)arg1 didTapButtonOfUserSource:(id)arg2;
- (void)liveBroadcastUserSectionController:(id)arg1 userSource:(id)arg2 selected:(_Bool)arg3;
- (void)liveBroadcastUserSectionController:(id)arg1 userSource:(id)arg2 toggled:(_Bool)arg3;
- (void)liveBroadcastUserSectionController:(id)arg1 didTapOnUserSource:(id)arg2;
- (void)liveBroadcastImageTitleSectionController:(id)arg1 didTapOnModel:(id)arg2;
- (id)_contextOverrideStringWithDefaultString:(id)arg1 user:(id)arg2;
- (id)_contextOverrideStringForUser:(id)arg1 guestStatus:(long long)arg2;
- (id)_contextOverrideStringforBrandPartner:(id)arg1;
- (id)_contextOverrideStringforHost;
- (id)_requestJoinModel;
- (void)setState:(long long)arg1 forGuest:(id)arg2;
- (void)setFollowStatus:(long long)arg1 forUser:(id)arg2;
- (_Bool)isNotFollowingUser:(id)arg1;
- (_Bool)isFollowingUser:(id)arg1;
- (id)initWithUserSession:(id)arg1 headerSheetDelegate:(id)arg2 showViewerList:(_Bool)arg3 isViewerToViewerWavesEnabled:(_Bool)arg4 asViewer:(_Bool)arg5 asModerator:(_Bool)arg6 module:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

