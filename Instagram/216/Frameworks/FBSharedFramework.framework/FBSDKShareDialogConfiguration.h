//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FBSDKServerConfigurationProviding;

@interface FBSDKShareDialogConfiguration : NSObject
{
    id <FBSDKServerConfigurationProviding> _serverConfigurationProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FBSDKServerConfigurationProviding> serverConfigurationProvider; // @synthesize serverConfigurationProvider=_serverConfigurationProvider;
- (_Bool)shouldUseSafariViewControllerForDialogName:(id)arg1;
- (_Bool)shouldUseNativeDialogForDialogName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *defaultShareMode;
- (id)initWithServerConfigurationProvider:(id)arg1;
- (id)init;

@end
