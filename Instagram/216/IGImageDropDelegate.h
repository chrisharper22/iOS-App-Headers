//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIDropInteractionDelegate-Protocol.h"

@class NSString;

@interface IGImageDropDelegate : NSObject <UIDropInteractionDelegate>
{
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _didTryToDropImageBlock;
    _Bool _isImageDropEnabled;
}

- (void).cxx_destruct;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)initWithCompletion:(CDUnknownBlockType)arg1 didTryToDropImage:(CDUnknownBlockType)arg2 isImageDropEnabled:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

