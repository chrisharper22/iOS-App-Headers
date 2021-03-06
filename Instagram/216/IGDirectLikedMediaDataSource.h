//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedNetworkSourceDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h"

@class IGFeedNetworkSource, IGUserSession, NSArray, NSString;
@protocol IGDirectLikedMediaDataSourceDelegate;

@interface IGDirectLikedMediaDataSource : NSObject <IGFeedNetworkSourceDelegate, IGMediaThumbnailSectionControllerSelectionDelegate, IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    _Bool _sidecarEnabled;
    _Bool _multiSelectEnabled;
    IGFeedNetworkSource *_networkDataSource;
    id <IGDirectLikedMediaDataSourceDelegate> _delegate;
    NSArray *_likedItems;
    _Bool _isLoading;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectLikedMediaDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_requestParams;
- (void)feedNetworkSource:(id)arg1 didUpdatePost:(id)arg2 withChange:(long long)arg3;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)didSelectFeedItem:(id)arg1 usingForceTouch:(_Bool)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (long long)itemCount;
- (_Bool)isLoading;
- (void)fetchMoreItems;
- (void)fetch;
- (id)initWithUserSession:(id)arg1 config:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

