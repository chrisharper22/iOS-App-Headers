//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAssetFileHandler, NSMutableDictionary;

@interface IGAssetModelStorage : NSObject
{
    IGAssetFileHandler *_fileHandler;
    NSMutableDictionary *_assetModelDictionary;
}

- (void).cxx_destruct;
- (id)assetPathForCacheType:(long long)arg1;
- (id)findOrCreateAssetPathForCacheType:(long long)arg1 version:(id)arg2;
- (id)createAssetModelFromAssetModelConfig:(id)arg1;
- (id)findAssetModelWithIdentifier:(id)arg1;
- (id)initWithParentFolder:(unsigned long long)arg1;

@end

