//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGHashtagModel;

@interface IGActivityHashtagFollowingInfo : NSObject
{
    _Bool _isFollowing;
    IGHashtagModel *_hashtagModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(readonly, nonatomic) IGHashtagModel *hashtagModel; // @synthesize hashtagModel=_hashtagModel;
- (id)initWithHashtagModel:(id)arg1 isFollowing:(_Bool)arg2;

@end

