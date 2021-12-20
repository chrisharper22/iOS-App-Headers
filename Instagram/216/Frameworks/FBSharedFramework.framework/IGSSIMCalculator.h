//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMediaQualityDataStore;
@protocol IGUserFeatureSets;

@interface IGSSIMCalculator : NSObject
{
    IGMediaQualityDataStore *_dataStore;
    id <IGUserFeatureSets> _featureSets;
}

- (void).cxx_destruct;
- (void)calculateSSIMForMediaId:(id)arg1 withEncodedAsset:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)initWithDataStore:(id)arg1 featureSets:(id)arg2;

@end

