//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFIMAPAccount.h>

@class MFAosSmtpAccount, NSString;

@interface MFAosImapAccount : MFIMAPAccount
{
    id _aoskitLock;
    struct AOSAccount *_aoskitAccount;
    struct AOSTransactionC *_mailPropertiesTransaction;
    struct AOSTransactionC *_aliasesTransaction;
    struct AOSTransactionC *_editAliasesURLTransaction;
    MFAosSmtpAccount *_aosSmtpAccount;
    BOOL _shouldBypassCache;
}

+ (void)updateAllEmailAliases:(BOOL)arg1;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)defaultPathNameForAccount;
+ (BOOL)defaultsToSSL;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property BOOL shouldBypassCache; // @synthesize shouldBypassCache=_shouldBypassCache;
- (void)migrateToNewAOSService;
- (void)openEditEmailAliasesURL;
- (void)updateEmailAliases;
- (void)_updateMailProperties;
- (void)_updateAliases:(BOOL)arg1;
- (id)_passwordFromKeychain;
- (void)_updateAoskitAccount;
- (void)_setDidUpdateToAppleToken:(BOOL)arg1;
- (BOOL)_didUpdateToAppleToken;
- (void)setDefaultAddress:(id)arg1;
- (void)_setEditAliasesURLTransaction:(struct AOSTransactionC *)arg1;
- (struct AOSTransactionC *)_copyEditAliasesURLTransaction;
- (void)_setAliasesTransaction:(struct AOSTransactionC *)arg1;
- (struct AOSTransactionC *)_copyAliasesTransaction;
- (void)_setMailPropertiesTransaction:(struct AOSTransactionC *)arg1;
- (struct AOSTransactionC *)_copyMailPropertiesTransaction;
- (void)_setAoskitAccount:(struct AOSAccount *)arg1;
- (struct AOSAccount *)_copyAoskitAccount;
@property(retain) NSString *aosDomain;
- (void)handleAlertResponse:(id)arg1;
- (void)presentOverQuotaAlert;
- (id)dynamicDeliveryAccount;
- (id)_replacementDeliveryAccountForDeliveryAccount:(id)arg1;
- (void)_removeDeliveryAccountIfNotInUse:(id)arg1;
- (void)setDeliveryAccount:(id)arg1;
- (id)deliveryAccount;
- (void)_setEmailAliases:(id)arg1;
- (id)emailAddresses;
- (id)rawEmailAddresses;
- (id)_URLPersistenceHostname;
- (id)iaSettingsIncludingPassword:(BOOL)arg1;
- (BOOL)shouldRetryConnectionWithoutCertificateCheckingAfterError:(id)arg1 host:(id)arg2 didPromptUser:(char *)arg3;
- (BOOL)canAuthenticateWithScheme:(id)arg1 connection:(id)arg2;
- (void)setIsOffline:(BOOL)arg1;
- (id)appleAuthenticationToken;
- (id)applePersonID;
- (void)setSessionPassword:(id)arg1;
- (void)setPermanentPassword:(id)arg1;
- (id)permanentPassword;
- (void)setPassword:(id)arg1;
- (id)defaultsDictionary;
- (void)setUsername:(id)arg1;
- (void)setHostname:(id)arg1;
- (id)hostname;
- (void)completeDeferredInitialization;
- (void)_setAccountInfo:(id)arg1;
- (void)dealloc;
- (id)initWithAccountInfo:(id)arg1;
- (void)setLastSuccessfulAosSmtpPortNumber:(long long)arg1;
- (long long)lastSuccessfulAosSmtpPortNumber;
- (id)aoskitPropertyForKey:(struct __CFString *)arg1;

@end

