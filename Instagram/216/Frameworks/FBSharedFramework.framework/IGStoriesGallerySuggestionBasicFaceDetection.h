//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PHAsset;

@interface IGStoriesGallerySuggestionBasicFaceDetection : NSObject
{
    PHAsset *_asset;
    NSArray *_faceScores;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *faceScores; // @synthesize faceScores=_faceScores;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (id)initWithAsset:(id)arg1 faceScores:(id)arg2;

@end

