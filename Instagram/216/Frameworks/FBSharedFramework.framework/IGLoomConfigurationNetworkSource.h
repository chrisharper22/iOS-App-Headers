//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBLoomConfigurationNetworkSource-Protocol.h>

@class IGUserSession;
@protocol FBLoomConfigurationNetworkSourceDelegate, IGRequestToken;

@interface IGLoomConfigurationNetworkSource : NSObject <FBLoomConfigurationNetworkSource>
{
    struct mutex _onGoingRequestMutex;
    id <IGRequestToken> _onGoingRequest;
    id <FBLoomConfigurationNetworkSourceDelegate> _delegate;
    IGUserSession *_userSession;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <FBLoomConfigurationNetworkSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleConfigFetchFailWithError:(id)arg1;
- (void)_handleConfigFetchSuccessWithData:(id)arg1;
- (void)reset;
- (void)cancel;
- (void)fetchConfiguration;
- (_Bool)configurationExpired;
- (_Bool)canFetchConfiguration;

@end

