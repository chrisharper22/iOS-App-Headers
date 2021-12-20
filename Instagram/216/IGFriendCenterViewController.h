//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGTabPageViewController.h"

#import "IGTabPageViewControllerDelegate-Protocol.h"

@class IGDiscoverPeopleForcedUserIdsModel, IGDiscoverPeopleViewController, IGFindUsersViewController2, IGUserSession, NSString;
@protocol IGFriendCenterViewControllerDelegate;

@interface IGFriendCenterViewController : IGTabPageViewController <IGTabPageViewControllerDelegate>
{
    _Bool _displayStory;
    _Bool _shouldAutoScroll;
    IGDiscoverPeopleViewController *_discoverPeopleViewController;
    IGFindUsersViewController2 *_facebookViewController;
    long long _entryPoint;
    IGDiscoverPeopleForcedUserIdsModel *_forcedUserIdsModel;
    NSString *_module;
    NSString *_entryFeedItemType;
    unsigned long long _requestType;
    IGUserSession *_userSession;
    long long _defaultTab;
    long long _currentTab;
    id <IGFriendCenterViewControllerDelegate> _friendCenterDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFriendCenterViewControllerDelegate> friendCenterDelegate; // @synthesize friendCenterDelegate=_friendCenterDelegate;
@property(nonatomic) long long currentTab; // @synthesize currentTab=_currentTab;
@property(readonly, nonatomic) long long defaultTab; // @synthesize defaultTab=_defaultTab;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(readonly, copy, nonatomic) NSString *entryFeedItemType; // @synthesize entryFeedItemType=_entryFeedItemType;
@property(readonly, nonatomic) _Bool shouldAutoScroll; // @synthesize shouldAutoScroll=_shouldAutoScroll;
@property(readonly, nonatomic) _Bool displayStory; // @synthesize displayStory=_displayStory;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) IGDiscoverPeopleForcedUserIdsModel *forcedUserIdsModel; // @synthesize forcedUserIdsModel=_forcedUserIdsModel;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) IGFindUsersViewController2 *facebookViewController; // @synthesize facebookViewController=_facebookViewController;
@property(readonly, nonatomic) IGDiscoverPeopleViewController *discoverPeopleViewController; // @synthesize discoverPeopleViewController=_discoverPeopleViewController;
- (id)_analyticsModuleForTab:(long long)arg1;
- (id)_viewControllerForTab:(long long)arg1;
- (void)pageViewController:(id)arg1 didPageToViewController:(id)arg2;
- (id)_createDiscoverPeopleViewController;
- (_Bool)prefersNavigationBarDividerHidden;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 displayStories:(_Bool)arg2 entryPoint:(long long)arg3 forcedUserIdsModel:(id)arg4 defaultTab:(long long)arg5 module:(id)arg6 delegate:(id)arg7 shouldAutoScroll:(_Bool)arg8 entryFeedItemType:(id)arg9 titleText:(id)arg10 requestType:(unsigned long long)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
