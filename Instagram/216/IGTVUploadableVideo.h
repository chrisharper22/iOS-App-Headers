//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPostPassthroughUploadCandidate, IGVideoComposition;

@interface IGTVUploadableVideo : NSObject
{
    IGVideoComposition *_videoComposition;
    IGPostPassthroughUploadCandidate *_equivalentPassthroughCandidate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGPostPassthroughUploadCandidate *equivalentPassthroughCandidate; // @synthesize equivalentPassthroughCandidate=_equivalentPassthroughCandidate;
@property(readonly, nonatomic) IGVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
- (id)initWithVideoComposition:(id)arg1 equivalentPassthroughCandidate:(id)arg2;

@end
