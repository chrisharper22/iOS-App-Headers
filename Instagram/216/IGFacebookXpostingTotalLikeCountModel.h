//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class NSNumber;

@interface IGFacebookXpostingTotalLikeCountModel : NSObject <IGListDiffable>
{
    NSNumber *_likeCount;
    NSNumber *_fbLikeCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *fbLikeCount; // @synthesize fbLikeCount=_fbLikeCount;
@property(readonly, nonatomic) NSNumber *likeCount; // @synthesize likeCount=_likeCount;
- (id)descriptionText:(id)arg1 forFbCount:(id)arg2;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithLikeCount:(id)arg1 fbLikeCount:(id)arg2;

@end

