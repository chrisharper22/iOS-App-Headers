//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGTVCreationCapabilitiesStore;
@protocol IGAPIClient, IGTVPostUploadCreationCapabilitiesServiceDelegate;

@interface IGTVPostUploadCreationCapabilitiesService : NSObject
{
    IGTVCreationCapabilitiesStore *_capabilitiesStore;
    id <IGAPIClient> _apiClient;
    id <IGTVPostUploadCreationCapabilitiesServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTVPostUploadCreationCapabilitiesServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchCreationCapabilities;
- (id)initWithCreationCapabilitiesStore:(id)arg1 apiClient:(id)arg2;

@end

