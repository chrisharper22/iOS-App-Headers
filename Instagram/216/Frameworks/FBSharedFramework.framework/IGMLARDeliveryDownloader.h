//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGMLDownloader-Protocol.h>

@class IGAREffectDownloaderManager;

@interface IGMLARDeliveryDownloader : NSObject <IGMLDownloader>
{
    IGAREffectDownloaderManager *_downloaderManager;
}

- (void).cxx_destruct;
- (void)_fetchModelForCapabilities:(vector_c3ed9701)arg1 modelInputs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)modelPathForType:(id)arg1;
- (void)fetchModels:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1;

@end
