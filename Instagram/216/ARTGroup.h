//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ARTNode.h"

#import "ARTContainer-Protocol.h"

@class NSString;

@interface ARTGroup : ARTNode <ARTContainer>
{
    struct CGRect _clipping;
}

@property(nonatomic) struct CGRect clipping; // @synthesize clipping=_clipping;
- (void)renderLayerTo:(struct CGContext *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
