//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CommerceKit/ISOperation.h>

#import "ISURLOperationDelegate.h"

@class ISPurchaseReceipt, NSString;

@interface ISAppleIDLookupOperation : ISOperation <ISURLOperationDelegate>
{
    ISPurchaseReceipt *mReceipt;
    NSString *mAppleID;
}

+ (id)appleIDLookupOperationForReceipt:(id)arg1;
@property(readonly) NSString *appleID; // @synthesize appleID=mAppleID;
- (void).cxx_destruct;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)run;
- (id)initWithReceipt:(id)arg1;
- (id)_newURLOperationWithURLBagType:(long long)arg1;
- (id)_requestBodyData;

@end

