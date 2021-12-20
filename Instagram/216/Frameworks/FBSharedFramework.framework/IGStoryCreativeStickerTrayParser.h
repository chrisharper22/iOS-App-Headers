//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNetworkParser-Protocol.h>

@class IGObjectDiskStorage, IGStoryCreativeAssetsParserConfiguration, NSString;
@protocol IGDirectInteropFeatureGating, IGUserLauncherSetProviding, IGUserStoreProviding><IGShoppingDropsCollectionReminderControllerProviding><IGProductSaveStatusStoreProviding><IGProductDrawingEnterStatusStoreProviding;

@interface IGStoryCreativeStickerTrayParser : NSObject <IGNetworkParser>
{
    IGObjectDiskStorage *_storageSticker;
    IGStoryCreativeAssetsParserConfiguration *_assetParserConfig;
    id <IGUserStoreProviding><IGShoppingDropsCollectionReminderControllerProviding><IGProductSaveStatusStoreProviding><IGProductDrawingEnterStatusStoreProviding> _objectStores;
    id <IGDirectInteropFeatureGating> _interopFeatureGating;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
}

- (void).cxx_destruct;
- (id)parsedObjectFromResponse:(id)arg1;
- (id)parsedStickerTrayResponseFromJSON:(id)arg1;
- (id)initWithStoryStickerObjectStorage:(id)arg1 assetParserConfig:(id)arg2 objectStores:(id)arg3 interopFeatureGating:(id)arg4 launcherSetProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
