//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFiloReadableContainer-Protocol.h>

@class IGFiloAttribution, IGFiloContainerIdentifier, IGFiloExtensions, IGFiloLayer, NSString;

@interface IGFiloReadableSingleValueContainer : NSObject <IGFiloReadableContainer>
{
    IGFiloAttribution *_attribution;
    IGFiloExtensions *_extensions;
    IGFiloLayer *_layer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) IGFiloAttribution *attribution;
@property(readonly, copy, nonatomic) IGFiloContainerIdentifier *identifier;
- (_Bool)containsValue;
- (id)readValueWithError:(id *)arg1;
- (id)readValueIfPresent;
- (id)initWithAttribution:(id)arg1 extensions:(id)arg2 layer:(id)arg3;
@property(readonly, nonatomic) IGFiloLayer *layer;
@property(readonly, nonatomic) IGFiloExtensions *extensions;
- (_Bool)isEqualToContainer:(id)arg1;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
