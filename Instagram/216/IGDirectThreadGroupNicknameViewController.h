//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDirectNicknameListener-Protocol.h"
#import "IGDirectRecipientSectionControllerSelectDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGDirectNicknameManager, IGListAdapter, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGDirectThreadGroupNicknameViewController : IGViewController <IGDirectNicknameListener, IGDirectRecipientSectionControllerSelectDelegate, IGListAdapterDataSource>
{
    UICollectionView *_collectionView;
    IGUserSession *_userSession;
    NSArray *_users;
    IGListAdapter *_listAdapter;
    IGDirectNicknameManager *_nicknameManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)_usersViewModels;
- (void)didUpdateNicknameForUserPk:(id)arg1;
- (void)_presentSetNicknameViewControllerForUser:(id)arg1;
- (void)recipientSectionController:(id)arg1 didTapSubtitleViewModel:(id)arg2;
- (_Bool)recipientSectionController:(id)arg1 shouldLongPressViewModel:(id)arg2;
- (void)recipientSectionController:(id)arg1 didLongPressViewModel:(id)arg2;
- (void)recipientSectionController:(id)arg1 didDeselectViewModel:(id)arg2;
- (void)recipientSectionController:(id)arg1 didSelectViewModel:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_setupCollectionViewAndListAdapter;
- (void)_setupTitle;
- (id)initWithUserSession:(id)arg1 users:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

