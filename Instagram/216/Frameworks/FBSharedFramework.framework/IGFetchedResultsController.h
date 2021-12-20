//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGMediaUpdatedListener-Protocol.h>

@class IGFeedNetworkSource, NSArray, NSMutableSet, NSString;
@protocol IGFetchedResultsControllerDelegate;

@interface IGFetchedResultsController : NSObject <IGMediaUpdatedListener>
{
    _Bool _blockUpdatedNotifications;
    id <IGFetchedResultsControllerDelegate> _delegate;
    IGFeedNetworkSource *_feedSource;
    NSArray *_previousFeedItems;
    NSArray *_currentFeedItems;
    NSMutableSet *_updatedFeedItems;
}

- (void).cxx_destruct;
@property _Bool blockUpdatedNotifications; // @synthesize blockUpdatedNotifications=_blockUpdatedNotifications;
@property(retain, nonatomic) NSMutableSet *updatedFeedItems; // @synthesize updatedFeedItems=_updatedFeedItems;
@property(retain, nonatomic) NSArray *currentFeedItems; // @synthesize currentFeedItems=_currentFeedItems;
@property(retain, nonatomic) NSArray *previousFeedItems; // @synthesize previousFeedItems=_previousFeedItems;
@property(nonatomic) __weak IGFeedNetworkSource *feedSource; // @synthesize feedSource=_feedSource;
@property(nonatomic) __weak id <IGFetchedResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didUpdateFeedItems:(id)arg1;
- (void)mediaWasUpdated:(id)arg1 withChange:(long long)arg2;
- (id)initWithFeedSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

