//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"

@class IGLiveInviteSheetEmptyView, IGTextButton, IGUserSession, NSArray, NSDictionary, NSSet, NSString;
@protocol IGStoryViewerSectionControllerViewerDelegate;

@interface IGLiveInviteSheetDataSource : NSObject <IGListAdapterDataSource>
{
    IGTextButton *_actionButton;
    IGUserSession *_userSession;
    NSString *_module;
    NSArray *_requestedUsers;
    NSArray *_invitableUsers;
    NSArray *_previouslySelectedUsers;
    IGLiveInviteSheetEmptyView *_emptyView;
    NSDictionary *_sectionHeaderViewModels;
    _Bool _querying;
    NSSet *_selectedUsers;
    id <IGStoryViewerSectionControllerViewerDelegate> _viewerDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGStoryViewerSectionControllerViewerDelegate> viewerDelegate; // @synthesize viewerDelegate=_viewerDelegate;
@property(nonatomic) _Bool querying; // @synthesize querying=_querying;
@property(retain, nonatomic) NSSet *selectedUsers; // @synthesize selectedUsers=_selectedUsers;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)setPreviouslySelectedUsers:(id)arg1;
- (void)setInvitableUsers:(id)arg1;
- (void)setRequestedUsers:(id)arg1;
- (void)setInviteButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setRequestedHeaderButtonTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic) _Bool requestHeaderButtonHidden; // @dynamic requestHeaderButtonHidden;
- (id)initWithUserSession:(id)arg1 viewerDelegate:(id)arg2 module:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

