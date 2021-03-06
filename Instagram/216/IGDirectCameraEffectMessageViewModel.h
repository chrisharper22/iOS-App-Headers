//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMessageViewModelProtocol-Protocol.h"
#import "IGListDiffable-Protocol.h"

@class IGDirectCameraEffectMessage, IGDirectMessageCellViewModel, NSString;

@interface IGDirectCameraEffectMessageViewModel : NSObject <IGDirectMessageViewModelProtocol, IGListDiffable>
{
    IGDirectMessageCellViewModel *_messageCellViewModel;
    IGDirectCameraEffectMessage *_message;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectCameraEffectMessage *message; // @synthesize message=_message;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)messageCellViewModel;
- (id)messageMetadata;
- (id)contentType;
- (double)contentHeight;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMessageCellViewModel:(id)arg1 message:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

