//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBAssistantStellaBusTransportDelegate;

@interface FBAssistantStellaBusTransport : NSObject
{
    id <FBAssistantStellaBusTransportDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBAssistantStellaBusTransportDelegate> delegate; // @synthesize delegate=_delegate;
- (void)start;
- (unsigned long long)maximumWriteSize;
- (void)sendPacket:(id)arg1;

@end
