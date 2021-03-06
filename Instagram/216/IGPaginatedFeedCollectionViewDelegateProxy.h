//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import "UICollectionViewDelegate-Protocol.h"

@class NSString;
@protocol IGPaginatedFeedCollectionViewListener, UICollectionViewDelegate;

@interface IGPaginatedFeedCollectionViewDelegateProxy : NSProxy <UICollectionViewDelegate>
{
    id <UICollectionViewDelegate> _proxiedDelegate;
    id <IGPaginatedFeedCollectionViewListener> _listener;
}

- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithCollectionView:(id)arg1 listener:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

