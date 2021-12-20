//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class IGSharePostToCallLayoutSpec, IGUser, NSString;

@interface IGSharePostToCallViewModel : NSObject <IGListDiffable>
{
    NSString *_ctaText;
    IGUser *_currentUser;
    IGSharePostToCallLayoutSpec *_layoutSpec;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSharePostToCallLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, copy, nonatomic) NSString *ctaText; // @synthesize ctaText=_ctaText;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithCurrentUser:(id)arg1 ctaText:(id)arg2 layoutSpec:(id)arg3;

@end
