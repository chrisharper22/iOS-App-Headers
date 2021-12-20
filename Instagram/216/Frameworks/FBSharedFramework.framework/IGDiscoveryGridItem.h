//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDiscoveryFeedItemReplaceable-Protocol.h>
#import <FBSharedFramework/IGIntentTransitionFocusItem-Protocol.h>
#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGGridLayoutSpec, NSString;
@protocol IGDiscoveryGridItemType;

@interface IGDiscoveryGridItem : NSObject <IGDiscoveryFeedItemReplaceable, IGListDiffable, IGIntentTransitionFocusItem, NSCopying>
{
    _Bool _enableAutoplay;
    IGGridLayoutSpec *_layoutSpec;
    NSObject<IGDiscoveryGridItemType> *_model;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool enableAutoplay; // @synthesize enableAutoplay=_enableAutoplay;
@property(readonly, copy, nonatomic) NSObject<IGDiscoveryGridItemType> *model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) IGGridLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (long long)intentTransitionFocusIntegerIdentifier;
- (id)intentTransitionFocusIdentifier;
- (id)copyByReplacingFeedItemWith:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLayoutSpec:(id)arg1 model:(id)arg2 enableAutoplay:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
