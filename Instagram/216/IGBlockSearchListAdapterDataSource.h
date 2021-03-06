//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGUserListSectionControllerSelectionDelegate-Protocol.h"
#import "IGUserListSectionControllerTapDelegate-Protocol.h"

@class IGUserSession, NSArray, NSString;
@protocol IGBlockSearchListAdapterDataSourceDelegate;

@interface IGBlockSearchListAdapterDataSource : NSObject <IGUserListSectionControllerSelectionDelegate, IGUserListSectionControllerTapDelegate, IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    NSString *_moduleName;
    NSArray *_recipients;
    id <IGBlockSearchListAdapterDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBlockSearchListAdapterDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
- (void)_toggleBlockStatusForUser:(id)arg1;
- (id)userListSectionControllerNavigationController:(id)arg1;
- (_Bool)userListSectionControllerShouldNavigateToProfileOnTap:(id)arg1;
- (void)userListSectionControllerCellWasTapped:(id)arg1;
- (void)userListSectionControllerDidDeselectUser:(id)arg1;
- (void)userListSectionControllerDidSelectUser:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)updateRecipient:(id)arg1;
- (id)initWithUserSession:(id)arg1 moduleName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

