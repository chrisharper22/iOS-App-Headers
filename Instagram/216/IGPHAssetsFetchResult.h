//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PHAssetCollection, PHFetchResult;

@interface IGPHAssetsFetchResult : NSObject
{
    NSArray *_assets;
    PHAssetCollection *_collection;
    PHFetchResult *_rawValue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHFetchResult *rawValue; // @synthesize rawValue=_rawValue;
@property(readonly, nonatomic) PHAssetCollection *collection; // @synthesize collection=_collection;
- (id)lastAsset;
- (id)assetAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfAsset:(id)arg1;
- (long long)count;
- (id)initWithFetchResults:(id)arg1 collection:(id)arg2;

@end

