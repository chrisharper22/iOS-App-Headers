//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectThreadMegaphoneDataProvider-Protocol.h"
#import "IGDirectTranslationsServiceLanguageDetectionDelegate-Protocol.h"

@class IGDirectTranslationsService, IGUserSession, NSString;
@protocol IGDirectThreadMegaphoneDataProviderDelegate;

@interface IGDirectTranslationsThreadMegaphoneDataProvider : NSObject <IGDirectTranslationsServiceLanguageDetectionDelegate, IGDirectThreadMegaphoneDataProvider>
{
    id <IGDirectThreadMegaphoneDataProviderDelegate> _delegate;
    IGDirectTranslationsService *_translationsService;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)handleLanguageMismatchDetectedForDialectCode:(id)arg1 user:(id)arg2 isPendingThread:(_Bool)arg3;
- (void)prepareThreadMegaphoneData;
- (void)stopListeningForThreadMegaphoneData;
- (void)startListeningForThreadMegaphoneDataWithDelegate:(id)arg1;
- (id)initWithUserSession:(id)arg1 translationsService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

